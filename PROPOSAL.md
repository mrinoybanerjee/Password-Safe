# Project Proposal
# Project Proposal

For the CS 126 final project, I plan to make an **Encryptor** application. The
main purpose of this application will be to encrypt the chosen files, and then
also add password protection to them. I will also be adding the functionality of
decryption, where the user can decrypt the already encrypted files.
In cryptography, encryption is the process of encoding a message or information
in such a way that only authorized parties can access it and those who are not
authorized cannot. Encryption does not itself prevent interference, but denies
the intelligible content to a would-be interceptor. In an encryption scheme, the
intended information or message, referred to as plaintext, is encrypted using an
encryption algorithm – a cipher that can be read only if decrypted.
Cryptography has always been an area of interest for me ever since I took up
computer science, and I believe this will the best opportunity for me to learn
more about it, and to gain hands on experience with it.

I looked up the suggested significant libraries for this assignment on Piazza,
and found one which would perfectly suit my idea. The name of the library is
**Bcrypt**, [Bcrypt](http://bcrypt.sourceforge.net). Bcrypt is a cross platform
file encryption utility. Encrypted files are portable across all supported
operating systems and processors. Passphrases must be between 8 and 56 characters
and are hashed internally to a 448 bit key. However, all characters supplied are
significant. The stronger your passphrase, the more secure your data.

I intend to make an interface for this encryptor using openFrameworks, which is
going to have a rough layout of having a main menu which asks user whether they
want to enrypt or decrypt their data/files, and then a leading page where they
would be able to set a password for their data if they chose to encrpt or prompt
them to enter their set password if they want to decrypt the files. An additional
feature that I am considering adding to my project will be a compressor tool,
which in addition to encrypting, also compresses the file, and can decompress them
while decryption.

This assignment will definitely be fun and challenging at the same time, and I am
looking forward to it.
