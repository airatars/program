using System;
using System.Collections.Generic;
using System.Linq;
using System.Media;
using System.Text;
using System.Threading.Tasks;

namespace MusicApp
{
    class Program
    {
        static void Main(string[] args)
        {
            System.Reflection.Assembly assembly = System.Reflection.Assembly.GetExecutingAssembly();
            System.IO.Stream resourceStream = 
                assembly.GetManifestResourceStream(@"MusicApp.ib.mp3");
            SoundPlayer player = new SoundPlayer(resourceStream);
            player.Play();
        }
    }
}
