//
//  encryptDecrypt.hpp
//  Encryptor
//
//  Created by Mrinoy on 4/24/18.
//

#ifndef encryptDecrypt_hpp
#define encryptDecrypt_hpp

#include <stdio.h>
#include "ofMain.h"
#include "BCrypt.h"

class passwordChecker {
private:
    string hashedPassword;
    bool containsPassword = false;
public:
    void setPassword(string password);
    string hashPassword(string password);
    bool comparePasswords(string otherPassword);
    bool loadPassword();
};


#endif /* encryptDecrypt_hpp */
