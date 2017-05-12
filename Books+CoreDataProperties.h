//
//  Books+CoreDataProperties.h
//  CoreDataUser
//
//  Created by CHT on 17/5/11.
//  Copyright © 2017年 chihaitao. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Books+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Books (CoreDataProperties)

+ (NSFetchRequest<Books *> *)fetchRequest;

@property (nonatomic) int64_t bid;
@property (nullable, nonatomic, copy) NSString *bname;
@property (nullable, nonatomic, retain) Student *owner;

@end

NS_ASSUME_NONNULL_END
