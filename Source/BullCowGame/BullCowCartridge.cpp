// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Moo there!"));
    PrintLine(TEXT("Guess the 4 letter word!")); //magic number remove
    PrintLine(TEXT("Press enter to continue..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // when the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("soup"); //move outside function

    if(Input == HiddenWord)
    {
        PrintLine(TEXT("Moo Win!"));
    }
    else
    {
        PrintLine(TEXT("Moo Lose!"));
    }
}