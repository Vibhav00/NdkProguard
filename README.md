# Native Development Kit (NDK) and  ProGuard

## Overview
This project demonstrates the use of the Native Development Kit (NDK) along with R8 and ProGuard in Android development. These tools are used for enhancing application performance and security by utilizing native code and applying obfuscation techniques to protect against reverse engineering.

## Native Development Kit (NDK)
The Native Development Kit (NDK) allows Android developers to implement parts of their app in native languages like C or C++. Using the NDK, developers can achieve:

- **Improved Performance:** Access to low-level APIs and system resources.
- **Cross-Platform Compatibility:** Reuse of existing C/C++ libraries.
- **Security Benefits:** Native code is often more challenging to reverse-engineer than Java code.

### Key Features
- **Access to Native Libraries:** Enables the use of C and C++ libraries.
- **Integration with Android Studio:** Includes tools to build and debug native code.
- **JNI Support:** Uses Java Native Interface (JNI) to call native code from Java/Kotlin.


### Key Features of ProGuard
- **Code Obfuscation:** Changes class, field, and method names to make the app harder to reverse-engineer.
- **Code Optimization:** Reduces APK size and removes unused code.
- **Support for Older Versions:** ProGuard has been around for a long time and is widely used.

## Why Use R8 and ProGuard with NDK?
While native code can be more secure than Java or Kotlin, using R8 and ProGuard in combination with the NDK adds another layer of protection. Obfuscating Java/Kotlin code and hiding native method calls can make it much harder for attackers to understand and reverse-engineer your app.


## Example ProGuard Rules
```proguard
# Keep Native Libraries
-keep class com.example.native.** { *; }

# Keep JNI methods
-keepclasseswithmembers class * {
    native <methods>;
}

# Do not obfuscate any C/C++ related classes
-keep class **.R
