package main

import (
    "bufio"
    "fmt"
    "os"
)

func getLinesFromFile(filePath string) ([]string, error) {
    file, err := os.Open(filePath)

    if err != nil {
        return nil, err
    }

    defer file.Close() // Make sure the file is closed after this function returns in all scenarios.

    scanner := bufio.NewScanner(file)

    var lines []string
    for scanner.Scan() {
        lines = append(lines, scanner.Text())
    }

    if err := scanner.Err(); err != nil {
        return nil, err
    }

    return lines, nil
}

func main() {
    err := os.Chdir("./") // Change the current working directory to the directory containing the program.
    if err != nil {
        fmt.Println("Error changing working directory:", err)
        panic(err)
    }

    lines, err := getLinesFromFile("input_file.txt")

    if err != nil {
        fmt.Println("Error reading file:", err)
        panic(err)
    }

    for _, line := range lines {
        fmt.Println(line)
    }
}
