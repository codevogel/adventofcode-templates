namespace MyApp
{
   public class Program
   {

      // Main entry point
      public static void Main(string[] args)
      {
         List<string> result = Parse_Input("my_input_file.txt");
         // For now, just print out each line of the resulting list.
         foreach (var line in result)
         {
            Console.WriteLine(line);
         }
      }

      // Parse the input file, process each line, and return the result
      static List<string> Parse_Input(string path)
      {
         List<string> result = [];
         var file_contents = File.ReadLines(path);
         foreach (var line in file_contents)
         {
            // This is where you add your parsing logic!
            // For now, this just does the same thing as File.ReadLines
            // but you can add your own logic here, such as line splitting
            result.Add(line);
         }
         return result;
      }
   }
}
