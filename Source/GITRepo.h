//
//  GITRepo.h
//  Git.framework
//
//  Created by Geoff Garside on 14/09/2009.
//  Copyright 2009 Geoff Garside. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface GITRepo : NSObject {
    NSString *root;
    BOOL bare;
}

@property (copy) NSString *root;
@property (assign,getter=isBare) BOOL bare;

+ (GITRepo *)repo;
+ (GITRepo *)repoWithRoot: (NSString *)theRoot;
+ (GITRepo *)repoWithRoot: (NSString *)theRoot error: (NSError **)theError;

- (id)initWithRoot: (NSString *)theRoot;
- (id)initWithRoot: (NSString *)theRoot error: (NSError **)theError;

@end
