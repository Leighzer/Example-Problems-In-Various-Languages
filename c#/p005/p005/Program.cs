using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace p005
{
    class Program
    {
        static void Main(string[] args)
        {

            int largestFactor = 20;
            int smallestMultiple = largestFactor;
            int x = 2;

            bool unsolved = true;
            while (unsolved)
            {
                bool foundSmallestMultiple = true;

                for(int i = 1; i < largestFactor; i++)
                {
                    if (smallestMultiple % i == 0)
                    {
                        continue;
                    }
                    else
                    {
                        smallestMultiple = largestFactor * x;
                        x = x + 1;
                        foundSmallestMultiple = false;
                        break;
                    }
                }

                if (foundSmallestMultiple)
                {
                    unsolved = false;
                }

            }

            Console.WriteLine("The smallest multiple evenly divisible by all of the numbers from 1 to 20 is: " + smallestMultiple);

            Console.ReadLine();


        }
    }
}
