const fs = require('fs');

function parseInput(path) {
    // Read file contents and split into lines
    const fileContents = fs.readFileSync(path, 'utf8');
    const result = fileContents.split('\n');

    // Optional: Remove any empty lines if needed
    // return result.filter(line => line.trim() !== '');
    return result;
}

function main() {
    const inputPath = 'my_input_file.txt';
    const lines = parseInput(inputPath);

    // Print out each line of the resulting array
    lines.forEach(line => {
        console.log(line);
    });
}

main();
