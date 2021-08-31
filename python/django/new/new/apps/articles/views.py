from django.http import HttpResponse

def index(request):
    return HttpResponse("Прив")

def test(request):
    return HttpResponse("test")