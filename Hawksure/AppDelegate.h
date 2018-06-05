//
//  AppDelegate.h
//  Hawksure
//
//  Created by ghanshaym gupta on 05/06/18.
//  Copyright © 2018 ghanshaym gupta. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

