# How to run (CLI)

1. Install the [Kotlin command-line compiler](https://kotlinlang.org/docs/command-line.html)
2. Navigate to the `/kotlin` directory
3. Compile the app using the Kotlin compiler
```bash
kotlinc Main.kt -include-runtime -d output.jar
```
4. Run the application
```bash
java -jar output.jar
```