# SHA-256

import hashlib

text = input()

hash_object = hashlib.sha256()
hash_object.update(text.encode())
hash_value = hash_object.hexdigest()

print(hash_value)