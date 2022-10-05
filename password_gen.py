#!/usr/bin/env python3
"""
generates random passwords
and saves to the clipboard
"""
import random
import pyperclip


def password_gen():
    upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    lower = upper.lower()
    digits = "0123456789"
    symbols = "*&%$#@!+~:-<|?/ >"
    empty_string = "" + upper

    empty_string += digits
    empty_string += lower
    empty_string += symbols
    password_length = 15

    generated_password = "".join(random.sample(
        empty_string, password_length
    ))
    print()
    print("password copied to clipboard")
    print("*"*28)
    print()
    pyperclip.copy(generated_password)


if __name__ == "__main__":
    password_gen()
