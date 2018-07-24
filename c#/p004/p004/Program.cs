using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace p004
{
    class Program
    {
        static void Main(string[] args)
        {

            List<int> palindromes = new List<int>();
            
            for(int i = 999; i > 0; i--)
            {
                for(int j = 999; j > 0; j--)
                {
                    int product = i * j;
                    if (isPalindrome(product))
                    {
                        palindromes.Add(product);
                    }
                }
            }

            palindromes.Sort();            
            
            Console.WriteLine("The largest palindrome product of two 3-digit numbers is :" + palindromes[palindromes.Count -1]);

            Console.ReadLine();

        }

        static bool isPalindrome(int number)
        {
            String numberAsString = number.ToString();

            char[] charArray = number.ToString().ToCharArray();
            Array.Reverse(charArray);
            String backwardsNumber = new string(charArray);

            return backwardsNumber.Equals(numberAsString);
        }
    }
}
