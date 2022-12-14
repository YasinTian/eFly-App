//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSString;
@protocol TuSDKTKLocationDelegate;

@interface TuSDKTKLocation : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    _Bool _isUpdating;
    _Bool _requireAuthor;
    _Bool _canGps;
    CLLocation *_lastLocation;
    id <TuSDKTKLocationDelegate> _delegate;
}

+ (id)shared;
@property(nonatomic) __weak id <TuSDKTKLocationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)updateLocation:(id)arg1;
- (void)startUpdate;
- (id)locationManager;
- (void)notifyDelegate;
@property(readonly, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
- (void)requireAuthorWithController:(id)arg1;
- (void)initLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

