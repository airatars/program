using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace TelegramBotApp.Models
{
    public static class AppSettings
    {
        public static string Url { get; set; }  = "https://telegrambotapp.azurewebsites.net:443/{0}";

        public static string Name { get; set; } = "kazuyasha_bot";

        public static string Key { get; set; }  = "1712019182:AAESj0WerZAUpV-01kzJPhQZ0ksGhqD1Fbw";

    }
}