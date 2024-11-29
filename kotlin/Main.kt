import java.io.File

fun parseInput(path: String): List<String> {
    val file = File(path)
    // Check if file exists
    if (!file.exists()) {
        println("File not found: $path")
        return emptyList()
    }

    // Read file contents, split by new lines and trim
    val fileContents = file.readText()
    val result = fileContents.lines()
        .map { it.trim() }
        .filter { it.isNotEmpty() }

    return result
}

fun main() {
    val inputPath = "my_input_file.txt"
    val lines = parseInput(inputPath)

    lines.forEach { println(it) }
}
