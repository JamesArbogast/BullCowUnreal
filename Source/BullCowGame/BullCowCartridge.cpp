// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{

    Super::BeginPlay();

    SetUpGame();

    PrintLine(FString::Printf(TEXT("The HiddenWord is: %s.\nIt is %i characters long."), *HiddenWord, HiddenWord.Len())); //debug line

    //Welcomes Player
    PrintLine(TEXT("Moo there!"));
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); //magic number remove
    PrintLine(TEXT("Type in your guess and press enter to continue..."));


    //prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // when the player hits enter
{
    ClearScreen();

    int32 WordLength = HiddenWord.Len();
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("Moo Win!"));
    }
    else
    {
        if(Input.Len() != WordLength)
        {
            PrintLine(TEXT("The Hidden Word is %i characters long, try again!"), HiddenWord.Len());
        } 
        
        PrintLine(TEXT("Moo Lose!"));
    }
}

void UBullCowCartridge::SetUpGame()
{
    //set hidden word
    HiddenWord = TEXT("soup");
    Lives = 3;
}