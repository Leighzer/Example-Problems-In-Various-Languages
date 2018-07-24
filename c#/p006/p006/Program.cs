using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace p006
{

    //Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

    class Program
    {
        static void Main(string[] args)
        {

            int sumOfSquare = 0;
            int squareOfSum = 0;
            int regularSum = 0;

            for(int i = 1; i <= 100; i++)
            {
                sumOfSquare += (int) Math.Pow(i, 2);
                regularSum += i;
            }

            squareOfSum = (int) Math.Pow(regularSum, 2);

            Console.WriteLine("The square of the sum of the first one hundred natural numbers is: " + squareOfSum);
            Console.WriteLine("The sum of the squares of the first one hundred natural numbers is: " + sumOfSquare);

            Console.WriteLine("The difference between the square of the usm and the sum of the squares of the first one hundred natural numbers is: " + (squareOfSum - sumOfSquare));
            
            Console.ReadLine();

        }
    }
}
