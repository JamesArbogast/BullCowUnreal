// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Moo there!"));
    PrintLine(TEXT("Guess the 4 letter word!")); //magic number remove
    PrintLine(TEXT("Press enter to continue..."));

    SetUpGame();

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
            PrintLine(TEXT("The Hidden Word is 4 characters long, try again!"));
        } 
            PrintLine(TEXT("Moo Lose!"));
            //lose a life
            //show lives left
            //restart play
    }
}

void UBullCowCartridge::SetUpGame()
{
    //set hidden word
    HiddenWord = TEXT("soup");
    Lives = 3;
}