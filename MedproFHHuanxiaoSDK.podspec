Pod::Spec.new do |spec|
  spec.name             = 'MedproFHHuanxiaoSDK'
  spec.version          = '1.5.10'
  spec.summary          = 'MedproFHHuanxiaoSDK for iOS'
  spec.description      = <<-DESC
                          MedproFHHuanxiaoSDK
                          DESC
  spec.homepage         = 'https://github.com/AdHuanxiao/medprofh_hx_ios_sdk'
  spec.license          = { :type => 'MIT', :file => 'LICENSE' }
  spec.author           = { 'HuanxiaoSDK' => 'eddie@adhuanxiao.com' }
  spec.source           = { :git => 'https://github.com/AdHuanxiao/medprofh_hx_ios_sdk.git', :tag => spec.version.to_s }
  
  spec.ios.deployment_target = '13.0'
  spec.static_framework = true
  
  spec.resources = [
    'MedproFHHuanxiaoSDK/Resources/MedproFHHXAdsImages.bundle'
  ]
  # 默认只安装基础SDK
  spec.default_subspecs = 'Core'
  

  spec.subspec 'Core' do |ss|
    ss.ios.deployment_target = '13.0'
    ss.vendored_frameworks = 'MedproFHHuanxiaoSDK/MedproFHHuanxiaoAds.xcframework'
  end
end
