def parse_input(path):
    # Read file and split into lines
    with open(path, 'r') as file:
        result = file.read().splitlines()
    # Optional: Remove any empty lines if needed
    return [line for line in result if line.strip()]


def main():
    input_path = 'my_input_file.txt'
    input_lines = parse_input(input_path)

    # Print out each line of the resulting list
    for line in input_lines:
        print(line)


# Run the main function
if __name__ == '__main__':
    main()
