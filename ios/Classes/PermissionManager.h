//
//  PermissionManager.h
//  permission_handler
//
//  Created by Razvan Lung on 15/02/2019.
//

#import <Flutter/Flutter.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "AudioVideoPermissionStrategy.h"


#import "LocationPermissionStrategy.h"

#import "PermissionStrategy.h"
#import "PhonePermissionStrategy.h"
#import "PhotoPermissionStrategy.h"

#import "StoragePermissionStrategy.h"
#import "UnknownPermissionStrategy.h"
#import "NotificationPermissionStrategy.h"
#import "PermissionHandlerEnums.h"
#import "Codec.h"

typedef void (^PermissionRequestCompletion)(NSDictionary *permissionRequestResults);

@interface PermissionManager : NSObject

- (instancetype)initWithStrategyInstances;
- (void)requestPermissions:(NSArray *)permissions completion:(PermissionRequestCompletion)completion;

+ (void)checkPermissionStatus:(enum PermissionGroup)permission result:(FlutterResult)result;
+ (void)checkServiceStatus:(enum PermissionGroup)permission result:(FlutterResult)result;
+ (void)openAppSettings:(FlutterResult)result;

@end
