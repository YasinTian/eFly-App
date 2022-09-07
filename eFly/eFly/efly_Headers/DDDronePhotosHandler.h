//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDDroneHandler.h"

@protocol DDDronePhotosHandlerDelegate;

@interface DDDronePhotosHandler : DDDroneHandler
{
    _Bool _initedSwitchMode;
    _Bool _initedPhotos;
    id <DDDronePhotosHandlerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <DDDronePhotosHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)photoBrowser:(id)arg1 hiddenNavAndTabbar:(_Bool)arg2;
- (void)getDronePhotos:(_Bool)arg1 currentIndex:(unsigned long long)arg2;
- (void)getGalleryOfPhotos:(_Bool)arg1 currentIndex:(unsigned long long)arg2;
- (void)showAlertMessage:(id)arg1;
- (void)showProgress:(_Bool)arg1 message:(id)arg2 progress:(float)arg3;
- (void)formatData;

@end
