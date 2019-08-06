//
//  encryptDecrypt.cpp
//  Encryptor
//
//  Created by Mrinoy on 4/24/18.
//

#include "encryptDecrypt.h"

#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
#include<cstdlib>

using namespace std;

/**
 This method sets the password with which the text file is to be encrypted.
 */
void passwordChecker::setPassword(string password) {
    hashedPassword = hashPassword(password);
    //OfFile is an ofx file reference. ie, it represents the file.
    ofFile passwordFile;
    //ofBuffer: File buffer to store the contents of the file.
    ofBuffer textData = ofBuffer(hashedPassword);
    passwordFile.open("StoredEncryptedPassword.txt", ofFile::WriteOnly);
    cout << textData.getText() << endl;
    passwordFile << hashedPassword;
    passwordFile.close();
    containsPassword = true;
}

/**
 This method is used to hash the password using bcrypt library. Takes the password entered as the string input, and returns the hashed password.
 */
string passwordChecker::hashPassword(string password) {
    BCrypt::hash256_one_by_one bcryptHashedPassword;
    string hashed;
    //initializing the hash
    bcryptHashedPassword.init();
    bcryptHashedPassword.process(password.begin(), password.end());
    bcryptHashedPassword.finish();
    
    BCrypt::get_hash_hex_string(bcryptHashedPassword, hashed);

    return hashed;
}
/**
 This method compares the two hashed passwords. Takes a string input.
 */
bool passwordChecker::comparePasswords(string otherPassword) {
    if (containsPassword) {
        string otherHashed = hashPassword(otherPassword);
        
        if (otherHashed == hashedPassword) {
            return true;
        }
    }
    
    return false;
}

/**
 Loading the password from a file and returns true if there exists a password in the file.txt.
 */
bool passwordChecker::loadPassword() {
    ifstream fileInputStream; //Opens file and reads it line by line
    fileInputStream.open(ofToDataPath("StoredEncryptedPassword.txt").c_str());
    
    vector<string> lineData;
    
    //Looping till end of file
    while (fileInputStream.peek() != EOF) {
        string tempString;
        //Takes file from input stream and puts it into temporary stream.
        fileInputStream >> tempString;
        lineData.push_back(tempString);
    }
    
    if (lineData.size() == 0) {
        return false;
    } else {
        hashedPassword = lineData.at(0);
        containsPassword = true;
        return true;
    }
}

