//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class DDMainViewController, NSPersistentContainer, NSString, UIWindow;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    _Bool _isLandscape;
    NSPersistentContainer *_persistentContainer;
    UIWindow *_window;
    DDMainViewController *_mainViewController;
}

@property(retain, nonatomic) DDMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)saveContext;
@property(readonly) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)removeReachbilityObserver;
- (void)addReachbilityObserver;
- (void)initRootViewController;
- (id)mainVC;
- (void)initData;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
