//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPOptions.h"

@class TuSDKPFAlbumMultipleOptions, TuSDKPFCameraOptions;

@interface TuSDKCPAlbumMultipleOptions : TuSDKCPOptions
{
    TuSDKPFAlbumMultipleOptions *_albumOptions;
    TuSDKPFCameraOptions *_cameraOptions;
}

@property(readonly, nonatomic) TuSDKPFCameraOptions *cameraOptions; // @synthesize cameraOptions=_cameraOptions;
@property(readonly, nonatomic) TuSDKPFAlbumMultipleOptions *albumOptions; // @synthesize albumOptions=_albumOptions;
- (void).cxx_destruct;
- (void)initOptions;

@end

