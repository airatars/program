using System;
using System.Collections.Generic;

class Program{
    static void Main() {
        string friend = "Anny";
        friend = friend.Replace("Anny", "Jam");
        int a = 5;
        int b = 6;
        int c = 0;
        int f = 0;

        Console.WriteLine($"Hello World! {friend} ");
        Console.WriteLine("Hello my best friebd, Jonny".Contains("Jonny"));
        Console.WriteLine(friend.ToUpper());


        if ((a == 5) && (b == 6))
        {
            Console.WriteLine("Good)");
        }
        else
        {
            Console.WriteLine("Not good(");
        }

        Console.WriteLine("--------------------");

        while (c <= 10)
        {
            Console.WriteLine($"c = {c}");
            c++;
        }

        Console.WriteLine("--------------------");

        for (int d = 15; d > 10; d--)
        {
            Console.WriteLine($"d = {d}");
        }

        Console.WriteLine("--------------------");

        for (int e = 1; e < 21; e++)
        {
            if(e % 3 == 0)
            {
                f = f + e;
            }
        }
        Console.WriteLine(f);

        Console.WriteLine("--------------------");

        var names = new List<string> { "Anny", "Johan" };
        names.Add("Masha");
        names.Remove("Anny");
        names.Sort();
        foreach(var name in names)
        {
            Console.WriteLine($"Hello {name}");
        }
        Console.WriteLine($"{ names.Count }");
    }
}