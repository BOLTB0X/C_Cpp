using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CH06_Generics
{
    class Stack<T>
    {
        T[] stack;
        int top = -1;
        public Stack()
        {
            stack = new T[100];
        }
        public void Push(T element)
        {
            stack[++top] = element;
        }
        public T Pop()
        {
            return stack[top--];
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Stack<string> stack = new Stack<string>(); //스택
            List<string> list = new List<string>(); //리스트
            Dictionary<string, int> dicitonary = new Dictionary<string, int>();
            dicitonary["조조"] = 98;
            dicitonary["하후돈"] = 78;
            dicitonary["하후연"] = 88;
            if (dicitonary.ContainsKey("조조"))
            {
                Console.WriteLine("조조 성적: " + dicitonary["조조"] + "점");
            }
            foreach(KeyValuePair<string,int>pair in dicitonary)
            {
                Console.WriteLine("[" + pair.Key + "]: " + pair.Value + "점");
            }
            Console.ReadLine();
            list.Add("유방");
            list.Add("항우");
            list.Add("한신");
            Console.WriteLine(list[0]);
            Console.WriteLine(list[1]);
            Console.WriteLine(list[2]);
            Console.ReadLine();
            stack.Push("유비");
            stack.Push("관우");
            stack.Push("장비");
            Console.WriteLine(stack.Pop());
            Console.WriteLine(stack.Pop());
            Console.WriteLine(stack.Pop());
            Console.ReadLine();
        }
    }
}
