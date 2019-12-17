// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GridDemoBlockGrid.h"
#include "GridDemoBlock.h"
#include "Components/TextRenderComponent.h"
#include "Engine/World.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

AGridDemoBlockGrid::AGridDemoBlockGrid()
{
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Slot0"));
	RootComponent = DummyRoot;


	// Set defaults
	Size = 8;
	BlockSpacing = 100.f;
}


void AGridDemoBlockGrid::BeginPlay()
{
	Super::BeginPlay();
	/*
	// Number of blocks
	const int32 NumBlocks = Size * Size;
	const int32 startPosition = -400;
	// Loop to spawn each block
	for(int32 BlockIndex=0; BlockIndex<NumBlocks; BlockIndex++)
	{
		const float XOffset = (BlockIndex/Size) * BlockSpacing + startPosition; // Divide by dimension
		const float YOffset = (BlockIndex%Size) * BlockSpacing + startPosition; // Modulo gives remainder

		// Make position vector, offset from Grid location
		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();

		// Spawn a block
		AGridDemoBlock* NewBlock = GetWorld()->SpawnActor<AGridDemoBlock>(BlockLocation, FRotator(0,0,0));
		NewBlock->PositionRow = (BlockIndex / Size);
		NewBlock->PositionColumn = (BlockIndex%Size);

		// Tell the block about its owner
		if (NewBlock != nullptr)
		{
			NewBlock->OwningGrid = this;
		}
	}
	*/
}

#undef LOCTEXT_NAMESPACE
