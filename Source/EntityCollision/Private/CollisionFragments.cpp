// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionFragments.h"

#include "MassEntityTemplateRegistry.h"

#include "Avoidance/MassAvoidanceFragments.h"

void UCollisionTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const
{
	BuildContext.AddFragment<FCollisionFragment>();
	BuildContext.AddFragment<FMassNavigationEdgesFragment>();
}
