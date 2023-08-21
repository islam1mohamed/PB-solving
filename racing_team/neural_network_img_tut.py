import tensorflow as tf
from tensorflow.keras.applications import ResNet50
from tensorflow.keras.preprocessing.image import ImageDataGenerator
from tensorflow.keras.layers import Dense, GlobalAveragePooling2D
from tensorflow.keras.models import Model
from tensorflow.keras.optimizers import Adam

# Load a smaller subset of the ImageNet dataset
data_generator = ImageDataGenerator(
    rescale=1.0/255,
    validation_split=0.2,
)

batch_size = 32
image_size = (224, 224)

train_generator = data_generator.flow_from_directory(
    'path_to_train_data',
    target_size=image_size,
    batch_size=batch_size,
    class_mode='categorical',
    subset='training',
)

valid_generator = data_generator.flow_from_directory(
    'path_to_train_data',
    target_size=image_size,
    batch_size=batch_size,
    class_mode='categorical',
    subset='validation',
)

# Load the pre-trained ResNet50 model
base_model = ResNet50(weights='imagenet', include_top=False)

# Add custom layers on top of the base model
x = base_model.output
x = GlobalAveragePooling2D()(x)
x = Dense(1024, activation='relu')(x)
predictions = Dense(num_classes, activation='softmax')(x)

model = Model(inputs=base_model.input, outputs=predictions)

# Compile the model
model.compile(optimizer=Adam(lr=0.0001), loss='categorical_crossentropy', metrics=['accuracy'])

# Train the model
model.fit(
    train_generator,
    steps_per_epoch=train_generator.samples // batch_size,
    validation_data=valid_generator,
    validation_steps=valid_generator.samples // batch_size,
    epochs=10
)
