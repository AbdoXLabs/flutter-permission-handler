//
//  PermissionHandlerEnums.h
//  permission_handler
//
//  Created by Razvan Lung on 15/02/2019.
//

typedef NS_ENUM(int, PermissionGroup) {
    PermissionGroupCamera = 0,
    
    PermissionGroupLocation,
    PermissionGroupLocationAlways,
    PermissionGroupLocationWhenInUse,

    PermissionGroupMicrophone,
    
    
    PermissionGroupPhone,
    PermissionGroupPhotos,
    
    
    PermissionGroupStorage,
    
    PermissionGroupNotification,
    PermissionGroupUnknown,
};

typedef NS_ENUM(int, PermissionStatus) {
    PermissionStatusDenied = 0,
    PermissionStatusDisabled,
    PermissionStatusGranted,
    PermissionStatusRestricted,
    PermissionStatusUnknown,
};

typedef NS_ENUM(int, ServiceStatus) {
    ServiceStatusDisabled = 0,
    ServiceStatusEnabled,
    ServiceStatusNotApplicable,
    ServiceStatusUnknown,
};
