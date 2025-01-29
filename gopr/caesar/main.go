package main

import (
	"fmt"
	"log"
	"os"
)

var text string
var key int
var encryptedText string
var decryptedText string

func encrypt(text string, key int) string {
	var encryptedText string
	var encryptedChar int32

	for _, char := range text {
		encryptedChar = char + int32(key)
		encryptedText += string(encryptedChar)
	}

	return encryptedText
}

func decrypt(text string, key int) string {
	var decryptedText string
	var decryptedChar int32

	for _, char := range text {
		decryptedChar = char - int32(key)
		decryptedText += string(decryptedChar)
	}

	return decryptedText
}

func creatingEncFile() {
	file, err := os.ReadFile("file.txt")
	if err != nil {
		log.Fatal(err)
	}

	fmt.Print("Введите ключ: ")
	fmt.Scanln(&key)

	encryptedText = encrypt(string(file), key)

	filePtr, err := os.Create("encryptedFile.txt")
	if err != nil {
		log.Fatal(err)
	}
	if err := os.WriteFile("encryptedFile.txt", []byte(encryptedText), 100); err != nil {
		log.Fatal(err)
	}
	defer filePtr.Close()
}

func creatingDecFile() {
	file, err := os.ReadFile("encryptedFile.txt")
	if err != nil {
		log.Fatal(err)
	}

	fmt.Print("Введите ключ: ")
	fmt.Scanln(&key)

	decryptedText = decrypt(string(file), key)

	filePtr, err := os.Create("decryptedFile.txt")
	if err != nil {
		log.Fatal(err)
	}
	if err := os.WriteFile("decryptedFile.txt", []byte(decryptedText), 100); err != nil {
		log.Fatal(err)
	}
	defer filePtr.Close()
}

func main() {
	creatingEncFile()
	creatingDecFile()
}
