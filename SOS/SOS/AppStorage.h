//
//  AppStorage.h
//  SOS
//
//  Created by Leonid Kokhnovych on 2016-03-05.
//  Copyright © 2016 Team14. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppStorage : NSObject <Singleton>

- (void)saveUserUUID:(NSString *)userUUID;
- (NSString *)userUUID;

@end