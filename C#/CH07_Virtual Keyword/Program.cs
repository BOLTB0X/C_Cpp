using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CH07_Virtual_Keyword
{
    public class Monster
    {
        public string name;
        public virtual void Attack()
        {
            Console.WriteLine("공격 수행");
        } 
    }
    public class Ork: Monster
    {
        public override void Attack()
        {
            name = "오크 족장";
            Console.WriteLine(name + ": 오크 공격");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Monster monster = new Monster();
            monster.Attack();
            Ork ork = new Ork();
            ork.Attack();
            Console.ReadLine();
        }
    }
}
