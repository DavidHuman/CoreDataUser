//
//  Books+CoreDataProperties.m
//  CoreDataUser
//
//  Created by CHT on 17/5/11.
//  Copyright © 2017年 chihaitao. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Books+CoreDataProperties.h"

@implementation Books (CoreDataProperties)

+ (NSFetchRequest<Books *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Books"];
}

@dynamic bid;
@dynamic bname;
@dynamic owner;

@end
