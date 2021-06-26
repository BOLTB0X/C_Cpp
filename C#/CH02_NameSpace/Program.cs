using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace Ex1
{
    class Ex
    {
        public static string data = "Ex1";
    }
}
namespace Ex2
{
    class Ex
    {
        public static string data = "Ex2";
    }
}
namespace CH02_NameSpace
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Ex1.Ex.data);
            Console.WriteLine(Ex2.Ex.data);
            Console.ReadLine();
        }
    }
}
