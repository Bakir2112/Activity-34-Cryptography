/**
 * @file caesar.h
 * @brief Header file for Caesar cipher encryption and decryption functions.
 * 
 * Provides functions for performing a simple Caesar cipher on text.
 */

#ifndef CAESAR_H
#define CAESAR_H

/**
 * @brief Encrypts text using Caesar cipher.
 * 
 * @param text The input text to encrypt.
 * @param key The shift key for encryption.
 */
void encrypt(char text[], int key);

/**
 * @brief Decrypts text using Caesar cipher.
 * 
 * @param text The input text to decrypt.
 * @param key The shift key for decryption.
 */
void decrypt(char text[], int key);

#endif
