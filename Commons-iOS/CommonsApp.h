//
//  CommonsApp.h
//  Commons-iOS
//
//  Created by Brion on 1/25/13.
//  Copyright (c) 2013 Wikimedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "FileUpload.h"

@interface CommonsApp : NSObject

@property (strong, nonatomic) UIWindow *window;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (strong, nonatomic) UIImage *image; // temp
@property (strong, nonatomic) NSManagedObjectContext *context;

+ (CommonsApp *)singleton;

- (void)initializeApp;
- (void)loadCredentials;
- (void)saveCredentials;
- (void)saveData;
- (FileUpload *)createUploadRecord;

@end
