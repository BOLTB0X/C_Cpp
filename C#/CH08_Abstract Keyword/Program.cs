using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CH08_Abstract_Keyword
{
    public abstract class Monster
    {
        public abstract void Attack();
    }
    public class Ork : Monster
    {
        public override void Attack()
        {
            Console.WriteLine("오크 공격");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Ork ork = new Ork();
            ork.Attack();
            Console.ReadLine();
        }
    }
}
