//
//  CollegeManager.h
//  CoreDataUser
//
//  Created by CHT on 17/5/11.
//  Copyright © 2017年 chihaitao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
@interface CollegeManager : NSObject
+ (CollegeManager*)sharedManager;
- (void)save;
- (void)deleteEntity:(NSManagedObject*)obj;
@end
