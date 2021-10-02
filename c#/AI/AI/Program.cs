using System;

namespace AI
{
    class Program
    {
        public class Neuron
        {
            private decimal weight = 0.5m;

            public decimal lastError { get; private set;}

            public decimal smoothing { get; set; } = 0.00001m;

            public decimal ProcessInputData(decimal input)
            {
                return input * weight;
            }
            public decimal RestoreInputData(decimal output)
            {
                return output / weight;
            }
            public void Train(decimal input, decimal expectedResult)
            {
                var actualResult = input * weight;
                lastError = expectedResult - actualResult;
                var correction = (lastError / actualResult) * smoothing;
                weight += correction;
            }
        }

        static void Main()
        {
            decimal usd = 1;
            decimal rub = 72.4329m;
            
            Neuron neuron = new Neuron();

            int i = 0;
            do
            {
                i++;

                neuron.Train(usd, rub);
                if (i % 100000 == 0)
                {
                    Console.WriteLine($"Итерация: {i}\tОшибка:\t{neuron.lastError}");
                }

            } while (neuron.lastError > neuron.smoothing || neuron.lastError < -neuron.smoothing);

            Console.WriteLine("Обучение завершено");

            Console.WriteLine($"{neuron.ProcessInputData(100)} rub в {100} usd");

            Console.WriteLine($"{neuron.ProcessInputData(541)} reb в {541} usd");

            Console.WriteLine($"{neuron.RestoreInputData(10)} usd в {10} rub");
        }
    }
}