Pod::Spec.new do |s|
  s.name         = "ObjectiveRichFlyerEvent"
  s.version      = "1.0.9"
  s.summary      = "The RichFlyer Event SDK for Objective-C"
  s.description  = <<-DESC
                      This framework is RichFlyer Event SDK built with Objective-C. The app built with Objective-C could embed this framework.
                   DESC
  s.homepage     = "https://richflyer.net"
  s.license      = { :type => "Commercial", :file => "LICENSE.txt" }
  s.author       = { "INFOCITY, Inc." => "richflyer@infocity.co.jp" }
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/INFOCITY/richflyer-event-sdk-objc.git", :tag => "#{s.version}" }
  s.ios.vendored_frameworks = "RichFlyerEvent.framework"
end
