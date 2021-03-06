/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "SightPreviewView.h"
#import "MMQRStrokeViewDelegate.h"
#import "MMUIView.h"

@class MMQRStrokeView, StrokeView, NSString, NSObject;
@protocol SightQRCodeScannerDelegate;

@interface SightPreviewViewF2 : MMUIView <SightPreviewView, MMQRStrokeViewDelegate> {
	float m_zoomLevel;
	BOOL m_isReady;
	CGSize sizeInPixels;
	float inputWidth;
	float inputHeight;
	float m_currZoomLevel;
	int m_focusInAnim;
	StrokeView* m_focusStroke;
	MMQRStrokeView* m_qrcodeStroke;
	BOOL m_supportQRFrame;
	BOOL _renderFirstFrame;
	BOOL _lightBoostOn;
	int _videoStabilizationMode;
	NSString* _qrData;
	NSObject<SightQRCodeScannerDelegate>* _qrDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak NSObject<SightQRCodeScannerDelegate>* qrDelegate;
@property(retain, nonatomic) NSString* qrData;
@property(assign, nonatomic) int videoStabilizationMode;
@property(assign, nonatomic) BOOL lightBoostOn;
@property(readonly, assign, nonatomic) BOOL renderFirstFrame;
@property(assign, nonatomic) float zoomLevel;
-(void).cxx_destruct;
-(void)onQRCodeTrig;
-(void)onQRCodeGone;
-(void)onQRCodeFind;
-(void)setQRScannerDelegate:(id)delegate;
-(void)onQRCodeFrame:(float*)frame withData:(id)data;
-(void)makeQRCodeFrame;
-(id)getShineAnim:(float)anim count:(unsigned long)count;
-(void)hideFocusFrame;
-(void)onFocusState:(BOOL)state atPoint:(CGPoint)point;
-(void)removeFocusStroke;
-(void)startFocusAnimAtPoint:(CGPoint)point;
-(void)forceFocusAnimAtPoint:(CGPoint)point;
-(CGPoint)transformPointToView:(CGPoint)view;
-(CGPoint)transformPointInView:(CGPoint)view;
-(void)setOutputWidth:(float)width andHeight:(float)height;
-(void)setZoomLevel:(float)level immediatly:(BOOL)immediatly;
-(void)setReady;
-(BOOL)isReady;
-(void)setQRFrameEnable:(BOOL)enable;
-(BOOL)supportQRFrame;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame previewLayer:(id)layer;
@end

