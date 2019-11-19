//
//  DSHybridSDK.h
//  DSHybridSDK
//
//  Created by Sanghong Han on 2019/11/12.
//  Copyright © 2019 directionsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DSHybridAppDelegate.h"

#define kFrameworkName                  @"DSHybridSDK 프레임워크"
#define kFramworkBundle                 @"com.directionsoft.DSHybridSDK"
#define ABBundle                        [[NSBundle mainBundle] infoDictionary]
#define APPVERSION                      [ABBundle objectForKey:@"CFBundleShortVersionString"]

#define kScreenBoundsWidth              [[UIScreen mainScreen] bounds].size.width
#define kScreenBoundsHeight             [[UIScreen mainScreen] bounds].size.height

#define UserDefaults                    [NSUserDefaults standardUserDefaults]
