//
//  UXYInjectio.h
//  UXYinjectioDemo
//
//  Created by Heaven on 15/1/25.
//  Copyright (c) 2015年 Heaven. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol UXYinjectioProtocol;

@interface NSObject (UXYInjectio)

- (void)bindInjectioWithSuiteName:(NSString *)name;
- (BOOL)immediatelySaveInjectio;
@end
