//
//  Student+CoreDataProperties.m
//  CoreDataUser
//
//  Created by CHT on 17/5/11.
//  Copyright © 2017年 chihaitao. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Student+CoreDataProperties.h"

@implementation Student (CoreDataProperties)

+ (NSFetchRequest<Student *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Student"];
}

@dynamic id;
@dynamic name;
@dynamic age;
@dynamic books;

@end
