using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CH03_Enum
{
    class Program
    {
        enum Color { BLACK, RED, BLUE, GREEN, WHITE};

        static void Main(string[] args)
        {
            Color color = Color.BLUE;
            if (color == Color.BLUE)
            {
                Console.WriteLine("파란색입니다. (색상: " + color + ")");
            }
            Console.ReadLine();
        }
    }
}
