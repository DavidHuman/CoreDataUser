//
//  Student+CoreDataProperties.h
//  CoreDataUser
//
//  Created by CHT on 17/5/11.
//  Copyright © 2017年 chihaitao. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Student+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Student (CoreDataProperties)

+ (NSFetchRequest<Student *> *)fetchRequest;

@property (nonatomic) int32_t id;
@property (nullable, nonatomic, copy) NSString *name;
@property (nonatomic) int16_t age;
@property (nullable, nonatomic, retain) Books *books;

@end

NS_ASSUME_NONNULL_END
